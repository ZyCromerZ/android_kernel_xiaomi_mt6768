# about repo
* Stock = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/eleven-upstream
* Stock Mod = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/eleven-upstream-mod
* Stock Mod 2 = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/eleven-upstream-mod2
* main branch for main chages for all kernels qk and neutrino l* kernels = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/20210405/main
* slmk changes for all kernels qk and neutrino l* kernels = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/20210405/main-SLMK
* almk changes for all kernels qk and neutrino l* kernels = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/20210405/main-ALMK
* QK L = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/20210405/qk-l
* QK N = https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/tree/20210405/qk-n
# info kernels
* Stock Mod :
    * same as stock kernels
    * add TTL support
    * add wireguard support
    * enabled ThinLTO
* Stock Mod 2 :
    * same as stock kernels
    * add TTL support
    * add wireguard support
    * can compiled using gcc 11

* QuantumKiller-N: 
    * Underclock CPU Big cores/cortex-a75 freq minimal from 850Mhz to 500Mhz
    * just normal kernel
    * 80Hz kernel timefrequency

* QuantumKiller-L: 
    * Underclock CPU Big cores/cortex-a75 freq minimal from 850Mhz to 500Mhz
    * Undervolt CPU
    * just normal kernel
    * 100Hz kernel timefrequency

* Neutrino-`<CPUCODE><GPUCODE>`
    * `CPUCODE` for <b>CPU</b> type
    * `GPUCODE` for <b>GPU</b> type
    * higher kernel timefrequency

# Detail about CODE things
* L = <b>CPU</b> : same as stock kernel
* X = <b>GPU</b> : same as stock kernel
* Y = <b>GPU</b> : same as merlin (1.000Mhz) and for lancelot only
* Z = <b>GPU</b> : Overclock to 1.018Mhz

# example about code
* Neurtino-LZ
    * L for Stock CPU frequencies
    * Z for Overclock GPU to 1.018Mhz

# Notes
* about compilers? <a href="https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/blob/changelogs/about-compiler.md">check here</a>
* what is STOCK-LMK ALMK SLMK? <a href="https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/blob/changelogs/about-lmk.md">check here</a>
* link download? <a href="https://github.com/ZyCromerZ/android_kernel_xiaomi_mt6768/blob/changelogs/download.md">check here</a>
* what is different between QK and Neutrino? QK only for non oc kernels