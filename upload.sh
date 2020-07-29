#! /bin/bash
echo '开始验证'
pod spec lint NPModalPanView.podspec --use-libraries --allow-warnings --verbose
say 验证完成 推送开始
echo '开始推送'
pod trunk push NPModalPanView.podspec --allow-warnings --use-libraries --verbose
say 推送完成 推送完成
