#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c110;
extern "C" RuntimeTag data_1048c10c;
extern "C" const RuntimeVTable data_100fc770;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100fc760;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100fc750;

typedef Token<&data_1048c110, &data_1048c10c, &data_100fc770> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100fc760> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100fc750> Type2;

extern "C" bool fn_02637548(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
