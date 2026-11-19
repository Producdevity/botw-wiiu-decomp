#include "botw/runtime_tag_query.h"

using runtime_tag_query::Token;

extern "C" unsigned data_1048bd28;
extern "C" RuntimeTag data_1048bd2c;
extern "C" const RuntimeVTable data_100ec318;
extern "C" unsigned data_10485ed8;
extern "C" RuntimeTag data_10486e88;
extern "C" const RuntimeVTable data_100ec308;
extern "C" unsigned data_10485ed0;
extern "C" RuntimeTag data_10486d38;
extern "C" const RuntimeVTable data_100ec2f8;

typedef Token<&data_1048bd28, &data_1048bd2c, &data_100ec318> Type0;
typedef Token<&data_10485ed8, &data_10486e88, &data_100ec308> Type1;
typedef Token<&data_10485ed0, &data_10486d38, &data_100ec2f8> Type2;

extern "C" bool fn_025b78c0(const void*, const RuntimeTag* other) {
    if (other == &Type0::get())
        return true;
    return other == &Type1::get() ? 1u : (other == &Type2::get()) & 0xffu;
}
