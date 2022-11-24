// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsimplecpu.h"
#include "Vsimplecpu__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vsimplecpu::Vsimplecpu(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vsimplecpu__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , a0{vlSymsp->TOP.a0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vsimplecpu::Vsimplecpu(const char* _vcname__)
    : Vsimplecpu(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vsimplecpu::~Vsimplecpu() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsimplecpu___024root___eval_initial(Vsimplecpu___024root* vlSelf);
void Vsimplecpu___024root___eval_settle(Vsimplecpu___024root* vlSelf);
void Vsimplecpu___024root___eval(Vsimplecpu___024root* vlSelf);
#ifdef VL_DEBUG
void Vsimplecpu___024root___eval_debug_assertions(Vsimplecpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimplecpu___024root___final(Vsimplecpu___024root* vlSelf);

static void _eval_initial_loop(Vsimplecpu__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsimplecpu___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsimplecpu___024root___eval_settle(&(vlSymsp->TOP));
        Vsimplecpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vsimplecpu::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsimplecpu::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsimplecpu___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsimplecpu___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vsimplecpu::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vsimplecpu::final() {
    Vsimplecpu___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vsimplecpu::hierName() const { return vlSymsp->name(); }
const char* Vsimplecpu::modelName() const { return "Vsimplecpu"; }
unsigned Vsimplecpu::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vsimplecpu::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vsimplecpu___024root__trace_init_top(Vsimplecpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsimplecpu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimplecpu___024root*>(voidSelf);
    Vsimplecpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vsimplecpu___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vsimplecpu___024root__trace_register(Vsimplecpu___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vsimplecpu::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vsimplecpu::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vsimplecpu___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
