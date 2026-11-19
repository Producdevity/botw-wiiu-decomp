#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bb78;
extern "C" RuntimeTag data_1048bb7c;
extern "C" const RuntimeVTable data_100e6360;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100e6350;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100e6340;

typedef Token<&data_1048bb78, &data_1048bb7c, &data_100e6360> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100e6350> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100e6340> Type2;

extern "C" bool fn_02589f98(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
