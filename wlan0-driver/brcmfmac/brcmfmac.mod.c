#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5a7ba343, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5e4862ee, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2b3d523c, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x9be4e862, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9f4b5dcf, __VMLINUX_SYMBOL_STR(brcmu_d11_attach) },
	{ 0x6c4c447, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xa46a9743, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb3e5be23, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xe7dbffbf, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb1343344, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x27d14f1f, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x3fa8806f, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_data) },
	{ 0x6d02848d, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x19e03378, __VMLINUX_SYMBOL_STR(cfg80211_get_p2p_attr) },
	{ 0xa8cde9a7, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xb0cbce0c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa20b8a74, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x7a67be0b, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_get_skb) },
	{ 0xc894a799, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2459616f, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x579facce, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xbe99a567, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x318adb8e, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x7e748150, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x794727cd, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x21fde7a3, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8488b10b, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_tail) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xf6b177aa, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xf2c3a46c, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x51356d65, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0xaf8ea3ab, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq) },
	{ 0x7843e792, __VMLINUX_SYMBOL_STR(cfg80211_unregister_wdev) },
	{ 0xdddfb8fb, __VMLINUX_SYMBOL_STR(brcmu_pktq_mdeq) },
	{ 0x143bee7, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf1cf45c4, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xbff4f13f, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x733823bd, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xc4189182, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xa9dd3551, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0xe842ad1e, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x8f8e633a, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7915d94f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xf6a07197, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x50e3dc84, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x26a7939c, __VMLINUX_SYMBOL_STR(sdio_writel) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf59556fc, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0xb28b55b9, __VMLINUX_SYMBOL_STR(brcmu_pktq_pdeq_match) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x65712c9b, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xc618d526, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0xadcc3ca7, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7c2c3051, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcaba357f, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5f1c699a, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xed3876c0, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xec6a4d04, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x3f8dcf47, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x71780997, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc0d034fb, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x66940955, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x97a81634, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0xb082b732, __VMLINUX_SYMBOL_STR(sdio_readl) },
	{ 0x5434112, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe6f172f8, __VMLINUX_SYMBOL_STR(brcmu_pktq_peek_tail) },
	{ 0x80aee875, __VMLINUX_SYMBOL_STR(brcmu_pktq_flush) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x85c3987f, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe16b893b, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x89c7c311, __VMLINUX_SYMBOL_STR(cfg80211_connect_result) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x26641498, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x7c2b092b, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x82cd0207, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xfeafd0c, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x253a7089, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xbba90331, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xf3ff406d, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x433fb974, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9a6476a2, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0xe5400e27, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x3caa40e0, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x849c5892, __VMLINUX_SYMBOL_STR(cfg80211_check_combinations) },
	{ 0x5b06a048, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x1f9d0e3, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x8e4b49b3, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0x8bc7c962, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0x2799a19f, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xb7ea129e, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x5fb8cf7d, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xa55c44a4, __VMLINUX_SYMBOL_STR(cfg80211_crit_proto_stopped) },
	{ 0x70562dcb, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xff3878e9, __VMLINUX_SYMBOL_STR(cfg80211_classify8021d) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x4269ffd8, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x711d59f6, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0x4a0d159b, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x70b6dfa3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x89f6f72d, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xf829b85a, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xbc7b90de, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x262d4fca, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xb14fc203, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xf09173a1, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x3f2988a1, __VMLINUX_SYMBOL_STR(brcmu_dotrev_str) },
	{ 0x9777bbd5, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1d44fa14, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0xb9e52429, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x5f6a5287, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x158f2f00, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x99699c8b, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xd1b2b4be, __VMLINUX_SYMBOL_STR(sdio_writew) },
	{ 0xa7c01804, __VMLINUX_SYMBOL_STR(brcmu_pktq_penq_head) },
	{ 0x290e880e, __VMLINUX_SYMBOL_STR(brcmu_pktq_init) },
	{ 0x2c557052, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0xfe634f58, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2762eaf9, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8893fa5d, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x84cb75d, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0x60800d16, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4a0079ee, __VMLINUX_SYMBOL_STR(sdio_readw) },
	{ 0x8095a189, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x569e9120, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x4c469703, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xe281cb37, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_stopped) },
	{ 0x887f20a8, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb38ae9ce, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x102002fb, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xcc83a9bf, __VMLINUX_SYMBOL_STR(brcmu_pkt_buf_free_skb) },
	{ 0x4f37afda, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x652fbf24, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x80d817ab, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xa2634dd6, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xc0acaaa0, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x187a2cc7, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xd25fda63, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x5ad4901, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x6f22b514, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x7c1f7a91, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xb442f6b3, __VMLINUX_SYMBOL_STR(cfg80211_sched_scan_results) },
	{ 0x92f32730, __VMLINUX_SYMBOL_STR(brcmu_pktq_mlen) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=brcmutil,cfg80211";

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "489A257663CD4221CF8BDED");
