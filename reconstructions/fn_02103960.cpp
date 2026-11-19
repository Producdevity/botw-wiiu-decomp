#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048784c;
extern "C" RuntimeTag data_10487850;
extern "C" const RuntimeVTable data_10021404;
extern "C" unsigned data_10485ed4;
extern "C" RuntimeTag data_10486d3c;
extern "C" const RuntimeVTable data_100213e4;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100213d4;

typedef Token<&data_1048784c, &data_10487850, &data_10021404> Type0;
typedef Token<&data_10485ed4, &data_10486d3c, &data_100213e4> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100213d4> Type2;

extern "C" bool fn_02103960(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
