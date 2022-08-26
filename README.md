# kbengine_ue5

1. 使用kbengine-main中提供的源文件修改并重新编译kbe相关代码

2. 调用new_assets.bat重新生成ue5版本的服务器

3. 修改本地数据库配置，kbengine\kbe\res\server\kbengine_defaults.xml或者kbengine\server_assets\res\server\kbengine.xml中覆盖默认配置,否则dbmgr连接数据库异常

4. 调用gensdk.bat生辰ue5版本插件

5. 编写插件中Scripts代码

6. 插件放到ue5工程中，.build.cs中引用模块，.uproject中关联插件
