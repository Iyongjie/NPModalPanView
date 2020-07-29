 
Pod::Spec.new do |s|
  s.name             = 'NPModalPanView'
  s.version          = '0.0.1'
  s.summary          = '拖拽view'

  s.description      = <<-DESC
                上下拖拽的view
                       DESC

  s.homepage         = 'https://github.com/iyongjie/NPModalPanView'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'iyongjie' => 'iyongjie@yeah.net' }
  s.source           = { :git => 'https://github.com/iyongjie/NPModalPanView.git', :tag => s.version.to_s }

  s.ios.deployment_target = '8.0'

  s.source_files = 'NPModalPanView/*'

end
