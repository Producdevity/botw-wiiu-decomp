#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048680c;
extern "C" RuntimeTag data_10493bdc;
extern "C" const RuntimeVTable data_1031f74c;
extern "C" unsigned data_10486208;
extern "C" RuntimeTag data_10490b24;
extern "C" const RuntimeVTable data_1031f554;
extern "C" unsigned data_104861f8;
extern "C" RuntimeTag data_10490b20;
extern "C" const RuntimeVTable data_1031f524;

typedef Token<&data_1048680c, &data_10493bdc, &data_1031f74c> Type0;
typedef Token<&data_10486208, &data_10490b24, &data_1031f554> Type1;
typedef Token<&data_104861f8, &data_10490b20, &data_1031f524> Type2;

extern "C" bool fn_037f4148(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
