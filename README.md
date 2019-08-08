<h1>Wamp add Host</h1>

Small executable that quickly and easly set up hosts for a new wamp project. Very specific for my workspace organisation.

For instance, using it for a new project named easy-passport for this path D:\wamp64\www\passport\easy-passport will add the folowing :

In D:\wamp64\bin\apache\apache2.4.27\conf\extra\httpd-vhosts.conf
Will be added ...
    
    <VirtualHost *:80>
        ServerAdmin localhost
        DocumentRoot "D:/wamp64/www/passport/easy-passport"
        ServerName easy-passport.local
        ServerAlias easy-passport.local
    </VirtualHost>


    
In C:\Windows\System32\drivers\etc\hosts
Will be added ...
    
    127.0.0.1       easy-passport.local
    
    
The code need to be customized for every workspace

