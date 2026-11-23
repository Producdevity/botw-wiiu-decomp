#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048628c;
extern "C" RuntimeTag data_10492668;
extern "C" const RuntimeVTable data_1033f91c;
extern "C" unsigned data_10486280;
extern "C" RuntimeTag data_10492664;
extern "C" const RuntimeVTable data_1033f8ec;
extern "C" unsigned data_1048627c;
extern "C" RuntimeTag data_10492660;
extern "C" const RuntimeVTable data_1033f8dc;

typedef Token<&data_1048628c, &data_10492668, &data_1033f91c> Type0;
typedef Token<&data_10486280, &data_10492664, &data_1033f8ec> Type1;
typedef Token<&data_1048627c, &data_10492660, &data_1033f8dc> Type2;

extern "C" bool fn_039481b4(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
