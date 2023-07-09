function htmlEncode(text: string, style: "bold" | "italic"): string {
  if (style === "bold") {
      return `<b>${text}</b>`;
  } else {
      return `<i>${text}</i>`;
  }
}

console.log(htmlEncode("Hello World", "bold"));  // <b>Hello World</b>
console.log(htmlEncode("Hello World", "italic");// <i>Hello World</i>