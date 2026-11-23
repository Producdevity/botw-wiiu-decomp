#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10496484;
extern "C" RuntimeTag data_10496858;
extern "C" const RuntimeVTable data_10334704;
extern "C" unsigned data_10486280;
extern "C" RuntimeTag data_10492664;
extern "C" const RuntimeVTable data_1033465c;
extern "C" unsigned data_1048627c;
extern "C" RuntimeTag data_10492660;
extern "C" const RuntimeVTable data_1033464c;

typedef Token<&data_10496484, &data_10496858, &data_10334704> Type0;
typedef Token<&data_10486280, &data_10492664, &data_1033465c> Type1;
typedef Token<&data_1048627c, &data_10492660, &data_1033464c> Type2;

extern "C" bool fn_038e79a8(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
