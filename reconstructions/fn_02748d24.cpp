#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cb1c;
extern "C" RuntimeTag data_1048cb20;
extern "C" const RuntimeVTable data_10122f48;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10122f38;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10122f28;

typedef Token<&data_1048cb1c, &data_1048cb20, &data_10122f48> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10122f38> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10122f28> Type2;

extern "C" bool fn_02748d24(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
