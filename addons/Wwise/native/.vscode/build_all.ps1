scons platform=windows target=editor wwise_sdk=$env:WWISESDK use_static_cpp=yes
scons platform=windows target=template_debug wwise_sdk=$env:WWISESDK use_static_cpp=yes
scons platform=windows target=template_release wwise_sdk=$env:WWISESDK use_static_cpp=yes
scons platform=windows target=template_release wwise_sdk=$env:WWISESDK use_static_cpp=yes dev_build=yes