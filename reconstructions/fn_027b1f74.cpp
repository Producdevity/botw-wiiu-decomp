#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce78;
extern "C" RuntimeTag data_1048ce7c;
extern "C" const RuntimeVTable data_1012fea0;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012fe90;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012fe80;

typedef Token<&data_1048ce78, &data_1048ce7c, &data_1012fea0> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012fe90> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012fe80> Type2;

extern "C" bool fn_027b1f74(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
