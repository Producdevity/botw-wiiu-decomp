#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_10486210;
extern "C" RuntimeTag data_1049236c;
extern "C" const RuntimeVTable data_1027aeec;
extern "C" unsigned data_10486208;
extern "C" RuntimeTag data_10490b24;
extern "C" const RuntimeVTable data_1027aedc;
extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_1027aecc;

typedef Token<&data_10486210, &data_1049236c, &data_1027aeec> Type0;
typedef Token<&data_10486208, &data_10490b24, &data_1027aedc> Type1;
typedef Token<&data_104861f8, &data_10490b20, &data_1027aecc> Type2;

extern "C" bool fn_030be044(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
