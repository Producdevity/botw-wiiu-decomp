#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048701c;
extern "C" RuntimeTag data_10487020;
extern "C" const RuntimeVTable data_1000ee38;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_1000ee28;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1000ee18;

typedef Token<&data_1048701c, &data_10487020, &data_1000ee38> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_1000ee28> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1000ee18> Type2;

extern "C" bool fn_02080f28(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
