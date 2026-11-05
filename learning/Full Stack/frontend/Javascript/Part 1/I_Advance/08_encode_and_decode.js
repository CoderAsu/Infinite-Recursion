// The encodeURI() method encodes a URI.
// The decodeURI() method decodes a URI.



let uri = "my test.asp?name=ståle&car=saab";
let encoded = encodeURI(uri);
let decoded = decodeURI(encoded);

console.log(encoded);
console.log(decoded);

