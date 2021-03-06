// PersistentDictionary.swift - created by: Adas Lesniak on: 18/09/2018
import Foundation


//UserDefaults backed Dictionary with String Keys and Codable Values
//TODO: sequence protocol implementation
public class PersistentDictionary {
    
    private var values = [String:Any]()
    private let queue: DispatchQueue
    
    //private static var usedQueueIds = [String]() //generics doesn't support static
    
    public init(_ storageKey: String) {
        queue = DispatchQueue(label: storageKey)
        if let saved = UserDefaults.standard.dictionary(forKey: storageKey) {
            values = saved
            print("got saved persistent dictionary [\(storageKey)]: \(values)")
        } else {
            print("there were nothing persisted for dictionary: \(storageKey)")
        }
    }
    
    public subscript(key: String) -> Any? {
        get {
            return queue.sync {
                return values[key] ?? nil
            }
        } set {
            queue.sync {
                values[key] = newValue
                do {
                    //FIXME: that should be run in background - not blocking dictionary in lock
                    UserDefaults.standard.set(values, forKey: queue.label)
                    UserDefaults.standard.synchronize()
                    print("synchronizing PersistentDeicgtionary[\(queue.label)]: \(values)")
                }
            }
        }
    }
    
    public subscript(key: UUID) -> Any? {
        get {
            return self[key.uuidString]
        } set {
            self[key.uuidString] = newValue
        }
    }
    
    public subscript(key: URL) -> Any? {
        get {
            return self[key.absoluteString]
        } set {
            self[key.absoluteString] = newValue
        }
    }
    
    public func keys() -> [String] {
        return queue.sync {
            return Array(values.keys)
        }
    }
    
    public func count() -> Int {
        return queue.sync {
            return values.count
        }
    }
}
