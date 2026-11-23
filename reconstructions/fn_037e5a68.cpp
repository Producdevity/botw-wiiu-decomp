#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10485f08;
extern "C" RuntimeTag data_1048b0d8;
extern "C" const RuntimeVTable data_1031eea8;
extern "C" unsigned data_10485eec;
extern "C" RuntimeTag data_104868ec;
extern "C" const RuntimeVTable data_1031ee98;
extern "C" unsigned data_10485ee8;
extern "C" RuntimeTag data_10486a8c;
extern "C" const RuntimeVTable data_1031ee88;

typedef Token<&data_10485f08, &data_1048b0d8, &data_1031eea8> Type0;
typedef Token<&data_10485eec, &data_104868ec, &data_1031ee98> Type1;
typedef Token<&data_10485ee8, &data_10486a8c, &data_1031ee88> Type2;

extern "C" bool fn_037e5a68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
