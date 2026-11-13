extern "C" char* fn_0204151c(void* context);
extern "C" float fn_02041540(void* context) {
    return *reinterpret_cast<volatile float*>(static_cast<char*>(fn_0204151c(context)) + 140);
}
