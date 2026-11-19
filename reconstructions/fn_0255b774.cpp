#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048b928;
extern "C" RuntimeTag data_1048b92c;
extern "C" const RuntimeVTable data_100dec58;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100dec48;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100dec38;

typedef Token<&data_1048b928, &data_1048b92c, &data_100dec58> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100dec48> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100dec38> Type2;

extern "C" bool fn_0255b774(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
