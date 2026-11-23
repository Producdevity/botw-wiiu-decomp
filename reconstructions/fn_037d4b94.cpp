#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10490d70;
extern "C" RuntimeTag data_104928dc;
extern "C" const RuntimeVTable data_1031d2c0;
extern "C" unsigned data_10486388;
extern "C" RuntimeTag data_1049232c;
extern "C" const RuntimeVTable data_1031d2b0;
extern "C" unsigned data_10486384;
extern "C" RuntimeTag data_10492344;
extern "C" const RuntimeVTable data_1031d238;

typedef Token<&data_10490d70, &data_104928dc, &data_1031d2c0> Type0;
typedef Token<&data_10486388, &data_1049232c, &data_1031d2b0> Type1;
typedef Token<&data_10486384, &data_10492344, &data_1031d238> Type2;

extern "C" bool fn_037d4b94(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
