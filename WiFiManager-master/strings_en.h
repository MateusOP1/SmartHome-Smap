/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_


#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
// !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

const char WM_VERSION_STR[] PROGMEM = "v2.0.11-beta";

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='pt-br'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>SMAP</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.getAttribute('data-ssid')||l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();};"
"function f() {var x = document.getElementById('p');x.type==='password'?x.type='text':x.type='password';}"
"</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><header class='header'><img src='data:image/bmp;base64,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'></header><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
// const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAADAAAAAwCAYAAABXAvmHAAADQElEQVRoQ+2YjW0VQQyE7Q6gAkgFkAogFUAqgFQAVACpAKiAUAFQAaECQgWECggVGH1PPrRvn3dv9/YkFOksoUhhfzwz9ngvKrc89JbnLxuA/63gpsCmwCADWwkNEji8fVNgotDM7osI/x777x5l9F6JyB8R4eeVql4P0y8yNsjM7KGIPBORp558T04A+CwiH1UVUItiUQmZ2XMReSEiAFgjAPBeVS96D+sCYGaUx4cFbLfmhSpnqnrZuqEJgJnd8cQplVLciAgX//Cf0ToIeOB9wpmloLQAwpnVmAXgdf6pwjpJIz+XNoeZQQZlODV9vhc1Tuf6owrAk/8qIhFbJH7eI3eEzsvydQEICqBEkZwiALfF70HyHPpqScPV5HFjeFu476SkRA0AzOfy4hYwstj2ZkDgaphE7m6XqnoS7Q0BOPs/sw0kDROzjdXcCMFCNwzIy0EcRcOvBACfh4k0wgOmBX4xjfmk4DKTS31hgNWIKBCI8gdzogTgjYjQWFMw+o9LzJoZ63GUmjWm2wGDc7EvDDOj/1IVMIyD9SUAL0WEhpriRlXv5je5S+U1i2N88zdPuoVkeB+ls4SyxCoP3kVm9jsjpEsBLoOBNC5U9SwpGdakFkviuFP1keblATkTENTYcxkzgxTKOI3jyDxqLkQT87pMA++H3XvJBYtsNbBN6vuXq5S737WqHkW1VgMQNXJ0RshMqbbT33sJ5kpHWymzcJjNTeJIymJZtSQd9NHQHS1vodoFoTMkfbJzpRnLzB2vi6BZAJxWaCr+62BC+jzAxVJb3dmmiLzLwZhZNPE5e880Suo2AZgB8e8idxherqUPnT3brBDTlPxO3Z66rVwIwySXugdNd+5ejhqp/+NmgIwGX3Py3QBmlEi54KlwmjkOytQ+iJrLJj23S4GkOeecg8G091no737qvRRdzE+HLALQoMTBbJgBsCj5RSWUlUVJiZ4SOljb05eLFWgoJ5oY6yTyJp62D39jDANoKKcSocPJD5dQYzlFAFZJflUArgTPZKZwLXAnHmerfJquUkKZEgyzqOb5TuDt1P3nwxobqwPocZA11m4A1mBx5IxNgRH21ti7KbAGiyNn3HoF/gJ0w05A8xclpwAAAABJRU5ErkJggg==' /><h1>{v}</h1><h3>WiFiManager</h3>";
const char HTTP_ROOT_MAIN[]        PROGMEM = "<h3>{v}</h3>";

const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button><i class='gg-data'></i><button>Configurar Wifi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configurar Wifi sem Escanear</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Informações</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Setup</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Fechar</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Reiniciar</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Sair</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Apagar</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Atualizar</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)' data-ssid='{V}'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>Nome da Rede</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Senha</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'><input type='checkbox' onclick='f()'> Show Password";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Save</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>\n"; // do not remove newline!

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Recarregar</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Salvar Credenciais<br/>Tentando se concetar a rede...<br />Se falhar, reconecte-se ao AP para tentar novamente!</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Salvo<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Apagar Configurações do Wifi</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Atualizar</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Voltar</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Connected</strong> to {v}<br/><em><small>with IP {i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>Not Connected</strong> to {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Falha na Autenticação"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP não existe";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>Não é possível se conectar"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Nenhuma AP selecionada</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
"header{background-color: #00a6cb;height: 60px;width: 100vw;display: flex;justify-content: center;align-items: center;}header>img{height: 100%;max-height: 30px;}.c,body{padding: 0;margin: 0;box-sizing: border-box;text-align:center;font-family:verdana}div,input,select{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box}"
"input,button,select,.msg{border-radius:.3rem;width: 100%}input[type=radio],input[type=checkbox]{width:auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#00a6cb;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #00a6cb}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#00a6cb;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#777}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#00a6cb}.msg.P h4{color:#00a6cb}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button{transition: 0s opacity;transition-delay: 3s;transition-duration: 0s;cursor: pointer}"
"button.D{background-color:#dc3630}"
"button:active{opacity:50% !important;cursor:wait;transition-delay: 0s}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
":disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
 "<br/><h3>Available Pages</h3><hr>"
 "<table class='table'>"
 "<thead><tr><th>Page</th><th>Function</th></tr></thead><tbody>"
 "<tr><td><a href='/'>/</a></td>"
 "<td>Menu page.</td></tr>"
 "<tr><td><a href='/wifi'>/wifi</a></td>"
 "<td>Show WiFi scan results and enter WiFi configuration.(/0wifi noscan)</td></tr>"
 "<tr><td><a href='/wifisave'>/wifisave</a></td>"
 "<td>Save WiFi configuration information and configure device. Needs variables supplied.</td></tr>"
 "<tr><td><a href='/param'>/param</a></td>"
 "<td>Parameter page</td></tr>"
 "<tr><td><a href='/info'>/info</a></td>"
 "<td>Information page</td></tr>"
 "<tr><td><a href='/u'>/u</a></td>"
 "<td>OTA Update</td></tr>"
 "<tr><td><a href='/close'>/close</a></td>"
 "<td>Close the captiveportal popup,configportal will remain active</td></tr>"
 "<tr><td>/exit</td>"
 "<td>Exit Config Portal, configportal will close</td></tr>"
 "<tr><td>/restart</td>"
 "<td>Reboot the device</td></tr>"
 "<tr><td>/erase</td>"
 "<td>Erase WiFi configuration and reboot Device. Device will not reconnect to a network until new WiFi configuration data is entered.</td></tr>"
 "</table>"
 "<p/>Github <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Upload New Firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Update</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* May not function inside captive portal, Open in browser http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Update Failed!</strong><Br/>Reboot device and try again</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Update Successful.  </strong> <br/> Device Rebooting now...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
// @todo remove html elements from progmem, repetetive strings
#ifdef ESP32
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp32</h3><hr><dl>";
	const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
  	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
  	const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Access Point Hostname</dt><dd>{1}</dd>";
    const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
	const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>Hall</dt><dd>{3}</dd>";
#else
	const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
	const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
	const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
	const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
	const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access Point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";

const char HTTP_INFO_aboutver[]     PROGMEM = "<dt>WiFiManager</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutarduino[] PROGMEM = "<dt>Arduino</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutsdk[]     PROGMEM = "<dt>ESP-SDK/IDF</dt><dd>{1}</dd>";
const char HTTP_INFO_aboutdate[]    PROGMEM = "<dt>Build Date</dt><dd>{1}</dd>";

const char S_brand[]              PROGMEM = "WiFiManager";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifisettings[]  PROGMEM = "Settings Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 11;
const char * const _menutokens[_nummenutokens] PROGMEM = {
    "wifi",
    "wifinoscan",
    "info",
    "param",
    "close",
    "restart",
    "exit",
    "erase",
    "update",
    "sep",
    "custom"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase";
const char R_status[]             PROGMEM = "/status";
const char R_update[]             PROGMEM = "/update";
const char R_updatedone[]         PROGMEM = "/u";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
	const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
	const char S_ssidpre[]        PROGMEM = "ESP32";
#else
	const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_3[]                  PROGMEM = "{3}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_V[]                  PROGMEM = "{V}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "OPEN",
    "WEP",
    "WPA_PSK",
    "WPA2_PSK",
    "WPA_WPA2_PSK",
    "WPA2_ENTERPRISE",
    "MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
    "",
    "",
    "WPA_PSK",      // 2 ENC_TYPE_TKIP
    "",
    "WPA2_PSK",     // 4 ENC_TYPE_CCMP
    "WEP",          // 5 ENC_TYPE_WEP
    "",
    "OPEN",         //7 ENC_TYPE_NONE
    "WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,CONFIG_ESP32_PHY_MAX_WIFI_TX_POWER,WIFI_COUNTRY_POLICY_AUTO};
#elif defined(ESP8266) && !defined(WM_NOCOUNTRY)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{"US",1,11,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_CN{"CN",1,13,WIFI_COUNTRY_POLICY_AUTO};
const wifi_country_t WM_COUNTRY_JP{"JP",1,14,WIFI_COUNTRY_POLICY_AUTO};
#endif


/*
* ESP32 WiFi Events

0  SYSTEM_EVENT_WIFI_READY               < ESP32 WiFi ready
1  SYSTEM_EVENT_SCAN_DONE                < ESP32 finish scanning AP
2  SYSTEM_EVENT_STA_START                < ESP32 station start
3  SYSTEM_EVENT_STA_STOP                 < ESP32 station stop
4  SYSTEM_EVENT_STA_CONNECTED            < ESP32 station connected to AP
5  SYSTEM_EVENT_STA_DISCONNECTED         < ESP32 station disconnected from AP
6  SYSTEM_EVENT_STA_AUTHMODE_CHANGE      < the auth mode of AP connected by ESP32 station changed
7  SYSTEM_EVENT_STA_GOT_IP               < ESP32 station got IP from connected AP
8  SYSTEM_EVENT_STA_LOST_IP              < ESP32 station lost IP and the IP is reset to 0
9  SYSTEM_EVENT_STA_WPS_ER_SUCCESS       < ESP32 station wps succeeds in enrollee mode
10 SYSTEM_EVENT_STA_WPS_ER_FAILED        < ESP32 station wps fails in enrollee mode
11 SYSTEM_EVENT_STA_WPS_ER_TIMEOUT       < ESP32 station wps timeout in enrollee mode
12 SYSTEM_EVENT_STA_WPS_ER_PIN           < ESP32 station wps pin code in enrollee mode
13 SYSTEM_EVENT_AP_START                 < ESP32 soft-AP start
14 SYSTEM_EVENT_AP_STOP                  < ESP32 soft-AP stop
15 SYSTEM_EVENT_AP_STACONNECTED          < a station connected to ESP32 soft-AP
16 SYSTEM_EVENT_AP_STADISCONNECTED       < a station disconnected from ESP32 soft-AP
17 SYSTEM_EVENT_AP_STAIPASSIGNED         < ESP32 soft-AP assign an IP to a connected station
18 SYSTEM_EVENT_AP_PROBEREQRECVED        < Receive probe request packet in soft-AP interface
19 SYSTEM_EVENT_GOT_IP6                  < ESP32 station or ap or ethernet interface v6IP addr is preferred
20 SYSTEM_EVENT_ETH_START                < ESP32 ethernet start
21 SYSTEM_EVENT_ETH_STOP                 < ESP32 ethernet stop
22 SYSTEM_EVENT_ETH_CONNECTED            < ESP32 ethernet phy link up
23 SYSTEM_EVENT_ETH_DISCONNECTED         < ESP32 ethernet phy link down
24 SYSTEM_EVENT_ETH_GOT_IP               < ESP32 ethernet got IP from connected AP
25 SYSTEM_EVENT_MAX


typedef enum {
    ARDUINO_EVENT_WIFI_READY = 0,
    ARDUINO_EVENT_WIFI_SCAN_DONE,
    ARDUINO_EVENT_WIFI_STA_START,
    ARDUINO_EVENT_WIFI_STA_STOP,
    ARDUINO_EVENT_WIFI_STA_CONNECTED,
    ARDUINO_EVENT_WIFI_STA_DISCONNECTED,
    ARDUINO_EVENT_WIFI_STA_AUTHMODE_CHANGE,
    ARDUINO_EVENT_WIFI_STA_GOT_IP,
    ARDUINO_EVENT_WIFI_STA_GOT_IP6,
    ARDUINO_EVENT_WIFI_STA_LOST_IP,
    ARDUINO_EVENT_WIFI_AP_START,
    ARDUINO_EVENT_WIFI_AP_STOP,
    ARDUINO_EVENT_WIFI_AP_STACONNECTED,
    ARDUINO_EVENT_WIFI_AP_STADISCONNECTED,
    ARDUINO_EVENT_WIFI_AP_STAIPASSIGNED,
    ARDUINO_EVENT_WIFI_AP_PROBEREQRECVED,
    ARDUINO_EVENT_WIFI_AP_GOT_IP6,
    ARDUINO_EVENT_WIFI_FTM_REPORT,
    ARDUINO_EVENT_ETH_START,
    ARDUINO_EVENT_ETH_STOP,
    ARDUINO_EVENT_ETH_CONNECTED,
    ARDUINO_EVENT_ETH_DISCONNECTED,
    ARDUINO_EVENT_ETH_GOT_IP,
    ARDUINO_EVENT_ETH_GOT_IP6,
    ARDUINO_EVENT_WPS_ER_SUCCESS,
    ARDUINO_EVENT_WPS_ER_FAILED,
    ARDUINO_EVENT_WPS_ER_TIMEOUT,
    ARDUINO_EVENT_WPS_ER_PIN,
    ARDUINO_EVENT_WPS_ER_PBC_OVERLAP,
    ARDUINO_EVENT_SC_SCAN_DONE,
    ARDUINO_EVENT_SC_FOUND_CHANNEL,
    ARDUINO_EVENT_SC_GOT_SSID_PSWD,
    ARDUINO_EVENT_SC_SEND_ACK_DONE,
    ARDUINO_EVENT_PROV_INIT,
    ARDUINO_EVENT_PROV_DEINIT,
    ARDUINO_EVENT_PROV_START,
    ARDUINO_EVENT_PROV_END,
    ARDUINO_EVENT_PROV_CRED_RECV,
    ARDUINO_EVENT_PROV_CRED_FAIL,
    ARDUINO_EVENT_PROV_CRED_SUCCESS,
    ARDUINO_EVENT_MAX
} arduino_event_id_t;

typedef union {
    wifi_event_sta_scan_done_t wifi_scan_done;
    wifi_event_sta_authmode_change_t wifi_sta_authmode_change;
    wifi_event_sta_connected_t wifi_sta_connected;
    wifi_event_sta_disconnected_t wifi_sta_disconnected;
    wifi_event_sta_wps_er_pin_t wps_er_pin;
    wifi_event_sta_wps_fail_reason_t wps_fail_reason;
    wifi_event_ap_probe_req_rx_t wifi_ap_probereqrecved;
    wifi_event_ap_staconnected_t wifi_ap_staconnected;
    wifi_event_ap_stadisconnected_t wifi_ap_stadisconnected;
    wifi_event_ftm_report_t wifi_ftm_report;
    ip_event_ap_staipassigned_t wifi_ap_staipassigned;
    ip_event_got_ip_t got_ip;
    ip_event_got_ip6_t got_ip6;
    smartconfig_event_got_ssid_pswd_t sc_got_ssid_pswd;
    esp_eth_handle_t eth_connected;
    wifi_sta_config_t prov_cred_recv;
    wifi_prov_sta_fail_reason_t prov_fail_reason;
} arduino_event_info_t;

*/
#endif
