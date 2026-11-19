#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b5c8;
extern "C" RuntimeTag data_1048b5cc;
extern "C" const RuntimeVTable data_100d8104;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100d808c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100d807c;

typedef Token<&data_1048b5c8, &data_1048b5cc, &data_100d8104> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100d808c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100d807c> Type2;

extern "C" bool fn_02536110(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
