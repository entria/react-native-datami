
Pod::Spec.new do |s|
  s.name         = "RNDatamiFetch"
  s.version      = "1.0.0"
  s.summary      = "RNDatamiFetch"
  s.description  = <<-DESC
                  RNDatamiFetch
                   DESC
  s.homepage     = ""
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "author" => "sibelius@entria.com.br" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/entria/RNDatamiFetch.git", :tag => "master" }
  s.source_files  = "RNDatamiFetch/**/*.{h,m}"
  s.requires_arc = true


  s.dependency "React"
  #s.dependency "others"

end

