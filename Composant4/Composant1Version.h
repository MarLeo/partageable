

#define ComposantVersion_1 1
#define ComposantVersion_2 2
#define ComposantVersion_3 0
#define ComposantVersion_4 0

/////////// apres cette ligne: ne pas modifier ///////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

#define COMPOSANT_VERSION ComposantVersion_1,ComposantVersion_2,ComposantVersion_2,ComposantVersion_4

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)
#define VERSION_TEXT(_version,_build,_interface,_fonction) \
	TOSTRING(_version) TOSTRING(.) TOSTRING(_build) TOSTRING(.) TOSTRING(_interface) STRINGIFY(.) TOSTRING(_fonction)

#define COMPOSANT_VERSION_STR VERSION_TEXT(ComposantVersion_1,ComposantVersion_2,ComposantVersion_2,ComposantVersion_4)
