import 'dart:io';

void main(List<String> args) {
  stdout.write('Hello ');
  for(String arg in args){
    stdout.write(arg);
  }
}