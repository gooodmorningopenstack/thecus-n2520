#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include "utility.h"
#include "stringtable.h"

cmd_table _gStrTable[] =
{
	{1,"Alarm Changed"},
	{2,"Alarm Mute"},
	{3,"Assemble RAID"},
	{4,"Backlight OFF"},
	{5,"Booting"},
	{6,"Building"},
	{7,"Check Default"},
	{8,"Check Factory default"},
	{9,"Config Networks"},
	{10,"CPU Fan:"},
	{11,"Damaged"},
	{12,"Degraded"},
	{13,"Disable"},
	{14,"Disk Failed"},
	{15,"Disk Info"},
	{16,"DOM Fail"},
	{17,"English"},
	{18,"Enter FS Check"},
	{19,"Enter New Password"},
	{20,"Enter Password:"},
	{21,"EXIT FACTORY MODE"},
	{22,"Exit?"},
	{23,"Failed"},
	{24,"Failover"},
	{25,"Fan_Status Fail"},
	{26,"Firmware Version"},
	{27,"French"},
	{28,"German"},
	{29,"Get DHCP"},
	{30,"Healthy"},
	{31,"Host Name"},
	{32,"Information:"},
	{33,"Italian"},
	{34,"Japanese"},
	{35,"Korean"},
	{36,"LAN IP:"},
	{37,"LAN Netmask:"},
	{38,"LAN Setting"},
	{39,"Language Changed"},
	{40,"Language selection:"},
	{41,"Link Aggregation Setting?"},
	{42,"Link Aggregation:"},
	{43,"Link Aggregation Setting"},
	{44,"Load Balance"},
	{45,"Loading Driver"},
	{46,"No"},
	{47,"None"},
	{48,"OK"},
	{49,"Password Changed"},
	{50,"Password Incorrect"},
	{51,"Polish"},
	{52,"Power OFF Start"},
	{53,"RAID Monitor"},
	{54,"Reboot Start"},
	{55,"Repair"},
	{56,"Repair Mode"},
	{57,"Resyncing"},
	{58,"Russian"},
	{59,"Wan Setting"},
	{60,"Lan Setting"},
	{61,"Link Aggregation"},
	{62,"Change Admin Password"},
	{63,"Change Language"},
	{64,"Reset to default"},
	{65,"Simplified Chinese"},
	{66,"Spanish"},
	{67,"Start 802.3ad"},
	{68,"Start ACPI"},
	{69,"START FACTORY MODE"},
	{70,"Start Network"},
	{71,"Start NFS"},
	{72,"Start Quota"},
	{73,"Start Service"},
	{74,"Start WEB service"},
	{75,"Successfully"},
	{76,"System Fan:"},
	{77,"System Reset"},
	{78,"System Failed"},
	{79,"System Ready"},
	{80,"Traditional Chinese"},
	{81,"USB Copy"},
	{82,"USB Copy Done"},
	{83,"USB Copy in Progress..."},
	{84,"WAN IP:"},
	{85,"WAN Netmask:"},
	{86,"WAN Setting"},
	{87,"WEB Service"},
	{88,"Power:"},
	{89,"shutdown abnormally"},
	{90,"Yes"},
	{91,"Setup Menu"},
	{92,"ALERT"},
	{93,"AC Lost"},
	{94,"AC Recover"},
	{95,"Under Construction"},
	{96,"Static IP"},
	{97,"DHCP"},
	{98,"802.3ad"},
	{99,"Storage leader Thecus ®"},
	{100,"Warning"},
	{101,"Battery"},
	{102,"Balance-XOR"},
	{103,"Balance-TLB"},
	{104,"Balance-ALB"},
	{105,"RAID"},
	{106,"Start Upgrade"},
	{107,"Upgrade in Progress..."},
	{108,"Upgrade Done"},
	{109,"Capacity Used"},
	{110,"Worldwide No.1 NAS"},
#ifdef STATUS_LED	
	{111,"Status LED"},
#endif
    	{-1, ""},
};

