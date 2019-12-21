[@bs.val] external document: Js.t({..}) = "document";

module Counter = {
  [@react.component]
  let make = () => {
    let (count, setCount) = React.useState(() => 0);
    <div className="mt-6 flex justify-center align-center">
      <button
        className="px-3 py-1 bg-blue-600 text-white rounded"
        onClick={_ => setCount(_ => count - 1)}>
        {React.string("-")}
      </button>
      <div className="mx-4"> {React.string(string_of_int(count))} </div>
      <button
        className="px-3 py-1 bg-blue-600 text-white rounded"
        onClick={_ => setCount(_ => count + 1)}>
        {React.string("+")}
      </button>
    </div>;
  };
};

ReactDOMRe.render(<Counter />, document##querySelector("main"));
