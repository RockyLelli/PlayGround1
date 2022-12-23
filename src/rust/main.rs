use std::env;

fn main(){
    let name: Vec<String> = env::args().collect();
    for _arg in name.iter(){
        print!("Hello ");
        println!("{}", name[1]);
    }
}