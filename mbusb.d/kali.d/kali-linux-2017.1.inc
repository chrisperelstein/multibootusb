menuentry "Live" {
  bootoptions="findiso=$iso_path boot=live components splash username=root hostname=kali"
  linux (loop)/live/vmlinuz $bootoptions
  initrd (loop)/live/initrd.img
}
menuentry "Live (failsafe)" {
  bootoptions="findiso=$iso_path boot=live components username=root hostname=kali memtest noapic noapm nodma nomce nolapic nomodeset nosmp nosplash vga=normal"
  linux (loop)/live/vmlinuz $bootoptions
  initrd (loop)/live/initrd.img
}
menuentry "Live (forensic mode)" {
  bootoptions="findiso=$iso_path boot=live components splash username=root hostname=kali noswap noautomount"
  linux (loop)/live/vmlinuz
  initrd (loop)/live/initrd.img
}
menuentry "Live USB Persistence (check kali.org/prst)" {
  bootoptions="findiso=$iso_path boot=live noconfig=sudo username=root hostname=kali persistence"
  linux (loop)/live/vmlinuz
  initrd (loop)/live/initrd.img
}
menuentry "Live USB Encrypted Persistence (check kali.org/prst)" {
  bootoptions="findiso=$iso_path boot=live persistent=cryptsetup persistence-encryption=luks noconfig=sudo username=root hostname=kali persistence"
  linux (loop)/live/vmlinuz
  initrd (loop)/live/initrd.img
}
