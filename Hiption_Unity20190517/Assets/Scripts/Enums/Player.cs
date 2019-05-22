using System;

[Flags]
public enum PlayerFlag
{
    PLAYER_1,
    PLAYER_2,
    PLAYER_3,
    PLAYER_4,


}

public class Players
{
	public bool p1;
	public bool p2;
	public bool p3;
	public bool p4;

	public string PlayersLine;

	public void Init ()
	{
		p1 = false;
		p2 = false;
		p3 = false;
		p4 = false;
	}
}