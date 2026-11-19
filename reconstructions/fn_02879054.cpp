#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048d7f8;
extern "C" RuntimeTag data_1048d7fc;
extern "C" const RuntimeVTable data_1014bbec;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_1014bbdc;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_1014bbcc;

typedef Token<&data_1048d7f8, &data_1048d7fc, &data_1014bbec> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_1014bbdc> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_1014bbcc> Type2;

extern "C" bool fn_02879054(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
