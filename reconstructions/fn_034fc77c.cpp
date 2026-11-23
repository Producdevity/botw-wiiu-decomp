#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10493fc0;
extern "C" RuntimeTag data_10493fc4;
extern "C" const RuntimeVTable data_102d0a5c;
extern "C" unsigned data_10486280;
extern "C" RuntimeTag data_10492664;
extern "C" const RuntimeVTable data_102d0a0c;
extern "C" unsigned data_1048627c;
extern "C" RuntimeTag data_10492660;
extern "C" const RuntimeVTable data_102d09fc;

typedef Token<&data_10493fc0, &data_10493fc4, &data_102d0a5c> Type0;
typedef Token<&data_10486280, &data_10492664, &data_102d0a0c> Type1;
typedef Token<&data_1048627c, &data_10492660, &data_102d09fc> Type2;

extern "C" bool fn_034fc77c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
