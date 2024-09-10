Pod::Spec.new do |s|

  s.name         = 'TurboSDK'    # 库名称
  s.version      = '1.0.6'    # 版本号，与push到GitHub的tag号一致
  s.summary      = 'TurboSDK版本'   # 库的描述信息
  s.homepage     = 'https://github.com/kookf/TurboSDK.git'  # 库在GitHub上的地址
  s.license      = 'MIT'   # 固定
  s.authors      = {'lee' => '417151840@qq.com'}  # 作者 => 邮箱
  s.platform     = :ios, '12.0'    # iOS版本最低限制
  s.source       = {:git => 'https://github.com/kookf/TurboSDK.git', :tag => s.version}     # 前部分是库在GitHub上的地址  后边意思是tag与库version一致
  s.source_files = 'TurboNetSDK.framework/**/*.{h,m}'  # 路径
  s.frameworks   = 'UIKit', 'Foundation' # 依赖框架
  s.requires_arc = true   # arc

end
