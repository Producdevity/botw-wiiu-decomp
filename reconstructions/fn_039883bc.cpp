#include "botw/teardown.h"

extern "C" void fn_03988318(void* member);
extern "C" void fn_039883a8(void* object, unsigned flags);
extern "C" const unsigned char data_1034a1b4[];
extern "C" const unsigned char data_1034a1d4[];

struct DualInterfaceObject {
    unsigned char unknown0[4];
    unsigned char member[20];
    const void* secondaryVtable;
    const void* primaryVtable;
};
typedef char DualInterfaceObjectSize[sizeof(DualInterfaceObject) == 32 ? 1 : -1];

extern "C" void fn_039883bc(DualInterfaceObject* object, unsigned flags) {
    if (object) {
        object->primaryVtable = data_1034a1b4;
        object->secondaryVtable = data_1034a1d4;
        fn_03988318(object->member);
        fn_039883a8(object->member, 0);
        if (flags & 1)
            fn_0308e6d0(object);
    }
}
