#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048cdb8;
extern "C" RuntimeTag data_1048cdbc;
extern "C" const RuntimeVTable data_1012c2dc;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012c2cc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012c2bc;

typedef Token<&data_1048cdb8, &data_1048cdbc, &data_1012c2dc> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012c2cc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012c2bc> Type2;

extern "C" bool fn_02787070(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
