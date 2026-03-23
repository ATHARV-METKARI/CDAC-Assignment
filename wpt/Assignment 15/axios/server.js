const http = require('http')
const server = http.createServer((req,res)=>{
    console.log("server started")

    if(req.method === 'GET'){

        if(req.url === '/' || req.url==='/index'){
            //res.writeHead(200,{'Content-Type':'text/HTML'})
            res.end(" index page ")
        }else if(req.url ==='/home'){
            res.writeHead(200,{'Content-Type':'text/HTML'})
            res.write('<h1>  Home Page </h1>')

        }else{
            res.writeHead(404,{'Content-Type':'text/HTML'})
            res.end("<h1>page not found</h1>")
        }


    }

    if(req.method === 'POST'){

        if(req.url === '/' || req.url==='/index'){
            //res.writeHead(200,{'Content-Type':'text/HTML'})
            res.end(" index page ")
        }else if(req.url ==='/home'){
            res.writeHead(200,{'Content-Type':'text/HTML'})
            res.write('<h1>  Home Page </h1>')

        }else{
            res.writeHead(404,{'Content-Type':'text/HTML'})
            res.end("<h1>page not found</h1>")
        }
    }

})

server.listen(5050)