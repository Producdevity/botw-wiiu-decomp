#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10489438;
extern "C" RuntimeTag data_1048943c;
extern "C" const RuntimeVTable data_1006c83c;
extern "C" unsigned data_10487140;
extern "C" RuntimeTag data_10489444;
extern "C" const RuntimeVTable data_1006c81c;
extern "C" unsigned data_1048713c;
extern "C" RuntimeTag data_10489440;
extern "C" const RuntimeVTable data_1006c77c;

typedef Token<&data_10489438, &data_1048943c, &data_1006c83c> Type0;
typedef Token<&data_10487140, &data_10489444, &data_1006c81c> Type1;
typedef Token<&data_1048713c, &data_10489440, &data_1006c77c> Type2;

extern "C" bool fn_022855c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
