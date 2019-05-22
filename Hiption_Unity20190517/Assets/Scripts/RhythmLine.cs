using System;
public struct RhythmLine
{
	// FFD added code dec 1 2016
	// fired deals with telling us if the event has already been instantiated.
	public bool fired;

    //Each line has a hit type associated with them, a required
    public HipHit hitType;
	public HipHit hitTypePlus;
	public CircleType circleType;
    public ushort back;
    public float strength;
    public float timeImpact;
    public float timeEndImpact;
    public float score;
    public float timeTillImpact;
    public Orientation orientation;
    public Players players;

    //
    public string ToCSVLine ()
    {
        return hitType.ToString () + "," + timeImpact + "," + timeEndImpact + "," + back + "," + strength + "," + score + "," + timeTillImpact + "," + orientation + "," + PlayersToString();
    }

    public string PlayersToString()
    {
        string returnStr = "";

		if (players.p1 = true)
			returnStr += "1";

		if (players.p2 = true)
			returnStr += "2";

		if (players.p3 = true)
			returnStr += "3";

		if (players.p4 = true)
			returnStr += "4";

       // foreach(PlayerFlag p in Enum.GetValues(players.GetType())) {
         //   if ((players & p) == p)
           //     returnStr += p.ToString().Replace("PLAYER_", "");
        //}

        return returnStr;
    }
}