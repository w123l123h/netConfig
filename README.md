# netConfig
c++ windows wmi修改ip+网关+dns

注意事项:  
1.项目必须以管理员权限运行  
2.参考main.cpp使用方法  
3.网卡的key可以从注册表获取, 路径: 计算机\HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Services\Tcpip\Parameters\Interfaces\  
4.网卡中文名可以从注册表获取,名字和系统(控制面板\网络和 Internet\网络和共享中心)显示的名字一致,路径: 计算机\HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\Network{4D36E972-E325-11CE-BFC1-08002BE10318}\
