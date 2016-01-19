void konek()
{
  if (client.connect(server, 80)) {
    Serial.println("connected");
    // Make a HTTP request:
    client.println("GET /hazmi/search.php?query=" + String(user_id) + " HTTP/1.1");
    client.println("Host: 192.168.1.2");
    client.println("Connection: close");
    client.println();
  } else {
    // if you didn't get a connection to the server:
    Serial.println("connection failed");
  }
}


void ambilweb()
{
  String data2;
  if (client.available()) {
    
    data2 = client.readStringUntil('\n');
    if (data2.substring(0, 1) == "z") {
      int idnya = (data2.substring(1)).toInt();
      EEPROMWritelong(6, idnya);
      user_id = EEPROMReadlong(6);
    }
  }
}

