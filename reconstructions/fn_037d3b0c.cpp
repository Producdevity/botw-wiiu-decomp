#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048f544;
extern "C" RuntimeTag data_10490d1c;
extern "C" const RuntimeVTable data_1031d0bc;
extern "C" unsigned data_10486208;
extern "C" RuntimeTag data_10490b24;
extern "C" const RuntimeVTable data_1031d0ac;
extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_1031d09c;

typedef Token<&data_1048f544, &data_10490d1c, &data_1031d0bc> Type0;
typedef Token<&data_10486208, &data_10490b24, &data_1031d0ac> Type1;
typedef Token<&data_104861f8, &data_10490b20, &data_1031d09c> Type2;

extern "C" bool fn_037d3b0c(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
