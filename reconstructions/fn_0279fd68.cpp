#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048ce40;
extern "C" RuntimeTag data_1048ce44;
extern "C" const RuntimeVTable data_1012ea78;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1012ea68;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1012ea58;

typedef Token<&data_1048ce40, &data_1048ce44, &data_1012ea78> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1012ea68> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1012ea58> Type2;

extern "C" bool fn_0279fd68(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
