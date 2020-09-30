
enum Settings
{
	ON,
	OFF,
	AUTOMATIC
};

struct Alarm
{
	Settings setting;
	char name[20];
};

struct AC
{
	Settings setting;
	char name[20];
};

struct Night_Light
{
	Settings setting;
	char name[20];
};

struct SmartHome
{
	Night_Light nightLight;
	AC ac;
	Alarm alarm;
};
