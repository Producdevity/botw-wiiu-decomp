#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048e378;
extern "C" RuntimeTag data_1048e37c;
extern "C" const RuntimeVTable data_101763e8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101763d8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_101763c8;

typedef Token<&data_1048e378, &data_1048e37c, &data_101763e8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101763d8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_101763c8> Type2;

extern "C" bool fn_0299b728(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
