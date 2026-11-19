#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d5dc;
extern "C" RuntimeTag data_1048d5d8;
extern "C" const RuntimeVTable data_10143d9c;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_10143d8c;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10143d7c;

typedef Token<&data_1048d5dc, &data_1048d5d8, &data_10143d9c> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_10143d8c> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10143d7c> Type2;

extern "C" bool fn_028447f4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
