struct State { unsigned char prefix[24]; char* value; };
extern "C" void* data_1047c390;
extern "C" char* fn_035194bc() {
    State* state = static_cast<State*>(data_1047c390);
    if (state && state->value) return state->value;
    return 0;
}
