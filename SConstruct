
DefaultEnvironment(tools=[])

build_env = Environment(tools=['gcc', 'as', 'ar', 'gnulink'])
build_env.PrependENVPath('PATH', 'D:/Tools/Gcc-7.3.0-32/bin')

duplicate = True
exports = {'env': build_env, 'duplicate': duplicate}

firmware = SConscript('firmware/SConscript', exports=exports, variant_dir='output-fw/', duplicate=duplicate)

exports['app_name'] = 'Bootloader0'
bootldr0 = SConscript('bootloader/SConscript', exports=exports, variant_dir='output-bl0/', duplicate=duplicate)

exports['app_name'] = 'Bootloader1'
bootldr1 = SConscript('bootloader/SConscript', exports=exports, variant_dir='output-bl1/', duplicate=duplicate)

Clean(bootldr0, 'output-bl0/')
Clean(bootldr1, 'output-bl1/')
Clean(firmware, 'output-fw/')

Alias('build', [bootldr0, bootldr1, firmware])
Command('run-all', 'build', [bootldr0, bootldr1, firmware])

Default('build')