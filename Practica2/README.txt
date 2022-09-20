Para compilar las tres carpetas:
  javac server/*.java
  javac rmi/*.java
  javac client/*.java
  
Para iniciar el servidor:
  java server/EchoMultiServer

Para ejecutar cualquier cliente:
  java client/EchoClient [direccionIP] [puerto]
