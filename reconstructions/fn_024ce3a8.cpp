#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b27c;
extern "C" RuntimeTag data_1048b280;
extern "C" const RuntimeVTable data_100c9434;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100c9424;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100c9414;

typedef Token<&data_1048b27c, &data_1048b280, &data_100c9434> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100c9424> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100c9414> Type2;

extern "C" bool fn_024ce3a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
