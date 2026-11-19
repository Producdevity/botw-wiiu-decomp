#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048c788;
extern "C" RuntimeTag data_1048c784;
extern "C" const RuntimeVTable data_101166b8;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_101166a8;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_10116698;

typedef Token<&data_1048c788, &data_1048c784, &data_101166b8> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_101166a8> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_10116698> Type2;

extern "C" bool fn_026e3938(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
